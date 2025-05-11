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
        // Size: 0x9c0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CDynamicNavConnectionsVolume : public source2sdk::server::CTriggerMultiple
        {
        public:
            CUtlSymbolLarge m_iszConnectionTarget; // 0x990            
            // m_vecConnections has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::DynamicVolumeDef_t> m_vecConnections;
            char m_vecConnections[0x18]; // 0x998            
            bool m_bConnectionsEnabled; // 0x9b0            
            uint8_t _pad09b1[0x3]; // 0x9b1
            float m_flTargetAreaSearchRadius; // 0x9b4            
            float m_flMinDetachDistance; // 0x9b8            
            uint8_t _pad09bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDynamicNavConnectionsVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDynamicNavConnectionsVolume) == 0x9c0);
    };
};
