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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Shadow_Demon_Disruption : public client::CDOTA_Buff
    {
    public:
        float m_flHealth; // 0x16e8        
        float m_flDisseminate_Duration; // 0x16ec        
        // m_hDisseminateAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hDisseminateAbility;
        char m_hDisseminateAbility[0x4]; // 0x16f0        
        client::ParticleIndex_t m_nFXIndex; // 0x16f4        
        bool m_bCanCast; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16f9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Shadow_Demon_Disruption because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Shadow_Demon_Disruption) == 0x1700);
};
