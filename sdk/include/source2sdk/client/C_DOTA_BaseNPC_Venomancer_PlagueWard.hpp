#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Additive.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1888
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_BaseNPC_Venomancer_PlagueWard : public client::C_DOTA_BaseNPC_Additive
    {
    public:
        bool m_bIsMovable; // 0x1870        
        [[maybe_unused]] std::uint8_t pad_0x1871[0x3]; // 0x1871
        QAngle m_angle; // 0x1874        
        int32_t m_iPoseParameterAim; // 0x1880        
        [[maybe_unused]] std::uint8_t pad_0x1884[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_BaseNPC_Venomancer_PlagueWard because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_BaseNPC_Venomancer_PlagueWard) == 0x1888);
};
