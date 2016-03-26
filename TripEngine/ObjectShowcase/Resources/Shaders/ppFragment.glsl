//blur fragment shader
#version 450 core

layout(location = 0) out vec3 out_color;

const vec3 ambientCol = vec3(0.1, 0.3, 0.1);
const vec3 fogCol = vec3(0.5, 0.9, 0.3);

uniform sampler2D texture_color;
uniform sampler2D texture_depth;

uniform mat4 i_pv_matrix;

uniform int screen_width, screen_height;

in vec2 uv;

void main()
{
	float depth = texture(texture_depth, uv).r;
	vec4 worldPosition = i_pv_matrix * vec4(uv * 2 - 1, depth, 1);
	worldPosition /= worldPosition.w;

	vec3 color = texture(texture_color, uv).rgb;

	out_color = color;
}