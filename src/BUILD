load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "src",
    srcs = glob([
        "*.cpp",
        "*.hpp",
    ]),
    data = [
        "//src/shaders/triangle:frag_shader",
        "//src/shaders/triangle:vert_shader",
    ],
    deps = [
        "//src/window",
        "//third_party/glfw",
        "//third_party/glm",
        "@rules_vulkan//vulkan:vulkan_cc_library",
    ],
)
