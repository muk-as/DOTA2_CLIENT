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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Batrider_FlamingLasso : public client::CDOTA_Buff
    {
    public:
        float tick_rate; // 0x16e8        
        int32_t drag_distance; // 0x16ec        
        int32_t break_distance; // 0x16f0        
        client::ParticleIndex_t m_nFXIndex; // 0x16f4        
        Vector vPreviousLocation; // 0x16f8        
        // m_hAnchor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_BaseNPC> m_hAnchor;
        char m_hAnchor[0x4]; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Batrider_FlamingLasso because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Batrider_FlamingLasso) == 0x1708);
};
