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
        // Size: 0x5e8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "bool m_bIsRadiantMiniboss"
        #pragma pack(push, 1)
        class C_DOTA_MinibossSpawner : public source2sdk::client::C_PointEntity
        {
        public:
            std::int32_t m_nVisualTeam; // 0x5e0            
            // metadata: MNetworkEnable
            bool m_bIsRadiantMiniboss; // 0x5e4            
            uint8_t _pad05e5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_MinibossSpawner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_MinibossSpawner) == 0x5e8);
    };
};
