#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x8
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct CDOTA_ScriptedSpawner__scripted_moveto_t
    {
    public:
        // hMoveToTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> hMoveToTarget;
        char hMoveToTarget[0x4]; // 0x0        
        // hGivenToNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> hGivenToNPC;
        char hGivenToNPC[0x4]; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTA_ScriptedSpawner__scripted_moveto_t, hMoveToTarget) == 0x0);
    static_assert(offsetof(CDOTA_ScriptedSpawner__scripted_moveto_t, hGivenToNPC) == 0x4);
    
    static_assert(sizeof(CDOTA_ScriptedSpawner__scripted_moveto_t) == 0x8);
};
