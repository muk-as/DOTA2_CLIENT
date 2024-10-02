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
    // Size: 0x1820
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_BaseNPC_Venomancer_PlagueWard : public client::C_DOTA_BaseNPC_Additive
    {
    public:
        bool m_bIsMovable; // 0x1808        
        [[maybe_unused]] std::uint8_t pad_0x1809[0x3]; // 0x1809
        QAngle m_angle; // 0x180c        
        int32_t m_iPoseParameterAim; // 0x1818        
        [[maybe_unused]] std::uint8_t pad_0x181c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_BaseNPC_Venomancer_PlagueWard because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_BaseNPC_Venomancer_PlagueWard) == 0x1820);
};
