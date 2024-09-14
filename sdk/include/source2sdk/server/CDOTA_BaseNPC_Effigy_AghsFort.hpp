#pragma once
#include "source2sdk/server/CDOTA_BaseNPC_Building.hpp"
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
    // Size: 0x1928
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_BaseNPC_Effigy_AghsFort : public server::CDOTA_BaseNPC_Building
    {
    public:
        uint32_t m_unStatusEffectIndex; // 0x1920        
        [[maybe_unused]] std::uint8_t pad_0x1924[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_BaseNPC_Effigy_AghsFort because it is not a standard-layout class
    static_assert(sizeof(CDOTA_BaseNPC_Effigy_AghsFort) == 0x1928);
};
