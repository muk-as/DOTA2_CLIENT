#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Additive.hpp"

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
        // Size: 0x1a58
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_BaseNPC_Venomancer_PlagueWard : public source2sdk::client::C_DOTA_BaseNPC_Additive
        {
        public:
            bool m_bIsMovable; // 0x1a40            
            uint8_t _pad1a41[0x3]; // 0x1a41
            QAngle m_angle; // 0x1a44            
            std::int32_t m_iPoseParameterAim; // 0x1a50            
            uint8_t _pad1a54[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_BaseNPC_Venomancer_PlagueWard because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC_Venomancer_PlagueWard) == 0x1a58);
    };
};
