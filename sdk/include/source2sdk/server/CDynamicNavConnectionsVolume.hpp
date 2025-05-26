#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CTriggerMultiple.hpp"
#include "source2sdk/server/DynamicVolumeDef_t.hpp"

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
        // Size: 0x9f8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CDynamicNavConnectionsVolume : public source2sdk::server::CTriggerMultiple
        {
        public:
            CUtlSymbolLarge m_iszConnectionTarget; // 0x9c0            
            // m_vecConnections has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::DynamicVolumeDef_t> m_vecConnections;
            char m_vecConnections[0x18]; // 0x9c8            
            CGlobalSymbol m_sTransitionType; // 0x9e0            
            bool m_bConnectionsEnabled; // 0x9e8            
            uint8_t _pad09e9[0x3]; // 0x9e9
            float m_flTargetAreaSearchRadius; // 0x9ec            
            float m_flUpdateDistance; // 0x9f0            
            float m_flMaxConnectionDistance; // 0x9f4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDynamicNavConnectionsVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDynamicNavConnectionsVolume) == 0x9f8);
    };
};
