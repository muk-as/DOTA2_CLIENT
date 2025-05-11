#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct CDOTA_ScriptedSpawner_scripted_moveto_t
        {
        public:
            // hMoveToTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> hMoveToTarget;
            char hMoveToTarget[0x4]; // 0x0            
            // hGivenToNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> hGivenToNPC;
            char hGivenToNPC[0x4]; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTA_ScriptedSpawner_scripted_moveto_t, hMoveToTarget) == 0x0);
        static_assert(offsetof(source2sdk::server::CDOTA_ScriptedSpawner_scripted_moveto_t, hGivenToNPC) == 0x4);
        
        static_assert(sizeof(source2sdk::server::CDOTA_ScriptedSpawner_scripted_moveto_t) == 0x8);
    };
};
