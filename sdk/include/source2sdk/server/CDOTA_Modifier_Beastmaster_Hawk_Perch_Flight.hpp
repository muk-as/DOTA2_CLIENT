#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Beastmaster_Hawk_Perch_Flight : public client::CDOTA_Buff
    {
    public:
        int32_t perch_flight_height; // 0x16e8        
        int32_t perch_tree_height; // 0x16ec        
        int32_t flight_speed; // 0x16f0        
        float m_flZDelta; // 0x16f4        
        Vector m_vStart; // 0x16f8        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Beastmaster_Hawk_Perch_Flight because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Beastmaster_Hawk_Perch_Flight) == 0x1708);
};
