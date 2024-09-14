#pragma once
#include "source2sdk/server/CDOTABehaviorMoveTo.hpp"
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
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x178
    // Has VTable
    #pragma pack(push, 1)
    class CDOTABehaviorCompanion
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x68]; // 0x0
        server::CDOTABehaviorMoveTo m_MoveTo; // 0x68        
        // m_goalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_goalEntity;
        char m_goalEntity[0x4]; // 0x148        
        Vector m_vOffset; // 0x14c        
        int32_t m_iRightOffset; // 0x158        
        int32_t m_iForwardOffset; // 0x15c        
        server::CountdownTimer m_PositionFuzziness; // 0x160        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTABehaviorCompanion, m_MoveTo) == 0x68);
    static_assert(offsetof(CDOTABehaviorCompanion, m_goalEntity) == 0x148);
    static_assert(offsetof(CDOTABehaviorCompanion, m_vOffset) == 0x14c);
    static_assert(offsetof(CDOTABehaviorCompanion, m_iRightOffset) == 0x158);
    static_assert(offsetof(CDOTABehaviorCompanion, m_iForwardOffset) == 0x15c);
    static_assert(offsetof(CDOTABehaviorCompanion, m_PositionFuzziness) == 0x160);
    
    static_assert(sizeof(CDOTABehaviorCompanion) == 0x178);
};
