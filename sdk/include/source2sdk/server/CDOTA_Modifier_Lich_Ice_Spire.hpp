#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Lich_Ice_Spire : public client::CDOTA_Buff
    {
    public:
        float aura_radius; // 0x16e8        
        client::ParticleIndex_t m_nFXIndex; // 0x16ec        
        server::CountdownTimer m_Timer; // 0x16f0        
        bool has_aura; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1709[0x3]; // 0x1709
        // hVictim has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> hVictim;
        char hVictim[0x4]; // 0x170c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Lich_Ice_Spire because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Lich_Ice_Spire) == 0x1710);
};
