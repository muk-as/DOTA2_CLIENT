#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AbyssalUnderlord_DarkRift : public client::CDOTA_Buff
    {
    public:
        client::ParticleIndex_t m_nfxTargetTp; // 0x16e8        
        float radius; // 0x16ec        
        int32_t duration; // 0x16f0        
        client::ParticleIndex_t m_nfxAmbientFx; // 0x16f4        
        bool bPointTarget; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16f9[0x3]; // 0x16f9
        Vector vDestination; // 0x16fc        
        [[maybe_unused]] std::uint8_t pad_0x1708[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AbyssalUnderlord_DarkRift because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AbyssalUnderlord_DarkRift) == 0x1710);
};
