exi_world_create_box(
    world,
    "Ground",
    exi_vec3(0, -0.5f, 0),
    exi_vec3(6, 0.5f, 6),
    EXI_STATIC
);
world->gravity = exi_vec3(
    0.0f,
    -9.81f,
    0.0f
);
ExiEntityID id =
    exi_world_create_box(
        world,
        "Box_A",
        exi_vec3(0, 5, 0),
        exi_vec3(0.5f, 0.5f, 0.5f),
        EXI_DYNAMIC
    );
exi_export_obj(
    &engine.world,
    "scenes/exi_world.obj",
    "scenes/exi_world.mtl"
);
