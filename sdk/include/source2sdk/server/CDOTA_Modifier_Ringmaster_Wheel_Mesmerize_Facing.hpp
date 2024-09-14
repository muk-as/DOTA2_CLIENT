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
    class CDOTA_BaseNPC;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Ringmaster_Wheel_Mesmerize_Facing : public client::CDOTA_Buff
    {
    public:
        float face_duration; // 0x16e8        
        float duration; // 0x16ec        
        float vision_cone; // 0x16f0        
        float m_flAccumulatedTime; // 0x16f4        
        float mesmerize_radius; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4]; // 0x16fc
        server::CountdownTimer ctFacing; // 0x1700        
        client::ParticleIndex_t m_nFXIndex; // 0x1718        
        // m_hPullTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_BaseNPC> m_hPullTarget;
        char m_hPullTarget[0x4]; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_Wheel_Mesmerize_Facing because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Ringmaster_Wheel_Mesmerize_Facing) == 0x1720);
};
