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
    class CDOTA_BaseNPC;
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
    class CDOTA_Modifier_Venomancer_Plague_Carrier : public client::CDOTA_Buff
    {
    public:
        // m_hAttachTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_BaseNPC> m_hAttachTarget;
        char m_hAttachTarget[0x4]; // 0x16e8        
        int32_t m_nWardIndex; // 0x16ec        
        float m_flPositioningAngle; // 0x16f0        
        float m_flTargetPreviousYaw; // 0x16f4        
        client::ParticleIndex_t m_nFXIndex; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Venomancer_Plague_Carrier because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Venomancer_Plague_Carrier) == 0x1700);
};
