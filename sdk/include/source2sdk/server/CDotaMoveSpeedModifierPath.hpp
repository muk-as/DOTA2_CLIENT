#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DotaModifierPathNode_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x520
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CDotaMoveSpeedModifierPath : public source2sdk::server::CBaseEntity
        {
        public:
            float m_flPathLength; // 0x4e0            
            uint8_t _pad04e4[0x4]; // 0x4e4
            // m_vecNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::DotaModifierPathNode_t> m_vecNodes;
            char m_vecNodes[0x18]; // 0x4e8            
            uint8_t _pad0500[0x18]; // 0x500
            // m_hTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTrigger;
            char m_hTrigger[0x4]; // 0x518            
            uint8_t _pad051c[0x4];
            
            // Datamap fields:
            // CUtlSymbolLarge pathNodes; // 0x7fffffff
            // CUtlSymbolLarge pathNodeRadiusScales; // 0x7fffffff
            // CUtlSymbolLarge pathNodeMoveSpeedTypes; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDotaMoveSpeedModifierPath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDotaMoveSpeedModifierPath) == 0x520);
    };
};
