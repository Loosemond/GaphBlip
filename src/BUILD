load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "src",
    srcs = glob([
        "*.cpp",
        "*.hpp",
    ]),
    deps = [
        "//src/window",
        "//third_party/glfw",
        "//third_party/glm",
        "@rules_vulkan//vulkan:vulkan_cc_library",
    ],
)
