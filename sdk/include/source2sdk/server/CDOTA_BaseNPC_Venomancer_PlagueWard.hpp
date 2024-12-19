#pragma once
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1880
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_BaseNPC_Venomancer_PlagueWard : public server::CDOTA_BaseNPC_Additive
    {
    public:
        bool m_bIsMovable; // 0x1868        
        [[maybe_unused]] std::uint8_t pad_0x1869[0x3]; // 0x1869
        QAngle m_angle; // 0x186c        
        int32_t m_iPoseParameterAim; // 0x1878        
        [[maybe_unused]] std::uint8_t pad_0x187c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_BaseNPC_Venomancer_PlagueWard because it is not a standard-layout class
    static_assert(sizeof(CDOTA_BaseNPC_Venomancer_PlagueWard) == 0x1880);
};
