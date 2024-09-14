#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Building.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1878
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_BaseNPC_Healer : public client::C_DOTA_BaseNPC_Building
    {
    public:
        client::ParticleIndex_t m_iRangeFX; // 0x1870        
        [[maybe_unused]] std::uint8_t pad_0x1874[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_BaseNPC_Healer because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_BaseNPC_Healer) == 0x1878);
};
