#version 450

layout(location = 0) in vec3 fragColor;

layout(location = 0) out vec4 outColor;

layout(origin_upper_left) in vec4 gl_FragCoord;

void main() {
     outColor = vec4(gl_FragCoord.x/800,gl_FragCoord.y/600,1,1.);
}