#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/DotaModifierPathNode_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x620
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CDotaMoveSpeedModifierPath : public source2sdk::client::C_BaseEntity
        {
        public:
            float m_flPathLength; // 0x5e0            
            uint8_t _pad05e4[0x4]; // 0x5e4
            // m_vecNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::DotaModifierPathNode_t> m_vecNodes;
            char m_vecNodes[0x18]; // 0x5e8            
            uint8_t _pad0600[0x18]; // 0x600
            // m_hTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTrigger;
            char m_hTrigger[0x4]; // 0x618            
            uint8_t _pad061c[0x4];
            
            // Datamap fields:
            // CUtlSymbolLarge pathNodes; // 0x7fffffff
            // CUtlSymbolLarge pathNodeRadiusScales; // 0x7fffffff
            // CUtlSymbolLarge pathNodeMoveSpeedTypes; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDotaMoveSpeedModifierPath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDotaMoveSpeedModifierPath) == 0x620);
    };
};
