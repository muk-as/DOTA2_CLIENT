#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CDOTA_BaseNPC;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_VoidSpirit_AetherRemnant_Pull : public client::CDOTA_Buff
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0x16e8        
        client::PlayerID_t m_nPlayerID; // 0x16ec        
        float m_fMovementSpeed; // 0x16f0        
        // m_hPullTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_BaseNPC> m_hPullTarget;
        char m_hPullTarget[0x4]; // 0x16f4        
        float think_interval; // 0x16f8        
        float artifice_pct_effectiveness; // 0x16fc        
        bool bIsArtifice; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1701[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_VoidSpirit_AetherRemnant_Pull because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_VoidSpirit_AetherRemnant_Pull) == 0x1708);
};
