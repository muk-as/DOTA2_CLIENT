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
    // Size: 0x1870
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_BaseNPC_Venomancer_PlagueWard : public client::C_DOTA_BaseNPC_Additive
    {
    public:
        bool m_bIsMovable; // 0x1858        
        [[maybe_unused]] std::uint8_t pad_0x1859[0x3]; // 0x1859
        QAngle m_angle; // 0x185c        
        int32_t m_iPoseParameterAim; // 0x1868        
        [[maybe_unused]] std::uint8_t pad_0x186c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_BaseNPC_Venomancer_PlagueWard because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_BaseNPC_Venomancer_PlagueWard) == 0x1870);
};
