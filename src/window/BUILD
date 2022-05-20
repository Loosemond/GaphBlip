load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "window",
    srcs = glob([
        "*.cpp",
        "*.hpp",
    ]),
    deps = [
        "//third_party/glfw",
        "@rules_vulkan//vulkan:vulkan_cc_library",
    ],
    visibility = ["//visibility:public"],
)
