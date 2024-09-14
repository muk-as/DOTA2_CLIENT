#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class CDOTA_Modifier_Wind_Waker : public client::CDOTA_Buff
    {
    public:
        // m_hBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBlocker;
        char m_hBlocker[0x4]; // 0x16e8        
        entity2::GameTime_t m_flStartTime; // 0x16ec        
        Vector m_vStartPos; // 0x16f0        
        float m_flCurTime; // 0x16fc        
        float m_flHeightT; // 0x1700        
        Vector m_vMoveToPos; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Wind_Waker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Wind_Waker) == 0x1710);
};
