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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Beastmaster_Hawk_Perch_Flight : public client::CDOTA_Buff
    {
    public:
        int32_t perch_flight_height; // 0x1708        
        int32_t perch_tree_height; // 0x170c        
        int32_t flight_speed; // 0x1710        
        float m_flZDelta; // 0x1714        
        Vector m_vStart; // 0x1718        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Beastmaster_Hawk_Perch_Flight because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Beastmaster_Hawk_Perch_Flight) == 0x1728);
};
