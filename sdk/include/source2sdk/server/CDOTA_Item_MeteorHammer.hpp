#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_Item.hpp"
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
    // Size: 0x688
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Item_MeteorHammer : public server::CDOTA_Item
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0x670        
        client::ParticleIndex_t m_nFXIndexB; // 0x674        
        Vector m_vecCastPosition; // 0x678        
        [[maybe_unused]] std::uint8_t pad_0x684[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_MeteorHammer because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_MeteorHammer) == 0x688);
};
