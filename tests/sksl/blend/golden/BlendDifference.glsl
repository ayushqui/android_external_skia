#version 400
out vec4 sk_FragColor;
in vec4 src, dst;
vec4 blend_difference(vec4 src, vec4 dst) {
    return vec4((src.xyz + dst.xyz) - 2.0 * min(src.xyz * dst.w, dst.xyz * src.w), src.w + (1.0 - src.w) * dst.w);
}
void main() {
    vec4 _0_blend_difference;
    {
        _0_blend_difference = vec4((src.xyz + dst.xyz) - 2.0 * min(src.xyz * dst.w, dst.xyz * src.w), src.w + (1.0 - src.w) * dst.w);
    }

    sk_FragColor = _0_blend_difference;

}
