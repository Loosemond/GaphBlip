load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "window",
    srcs = glob([
        "*.cpp",
        "*.hpp",
    ]),
    visibility = ["//visibility:public"],
    deps = [
        "//third_party/glfw",
        "@rules_vulkan//vulkan:vulkan_cc_library",
    ],
)
