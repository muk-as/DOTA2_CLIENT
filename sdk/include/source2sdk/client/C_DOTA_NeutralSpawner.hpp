#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PointEntity.hpp"

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
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_Type"
        #pragma pack(push, 1)
        class C_DOTA_NeutralSpawner : public source2sdk::client::C_PointEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_Type; // 0x5e8            
            uint8_t _pad05ec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_NeutralSpawner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_NeutralSpawner) == 0x5f0);
    };
};
