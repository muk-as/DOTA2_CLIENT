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
    class CDOTABehaviorChase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x68]; // 0x0
        server::CDOTABehaviorMoveTo m_MoveTo; // 0x68        
        // m_hChaseEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hChaseEntity;
        char m_hChaseEntity[0x4]; // 0x148        
        bool m_bTargetMoves; // 0x14c        
        [[maybe_unused]] std::uint8_t pad_0x14d[0x3]; // 0x14d
        float m_flFollowDistance[2]; // 0x150        
        float m_flForwardDistance; // 0x158        
        float m_flRightDistance; // 0x15c        
        server::CountdownTimer m_PositionFuzziness; // 0x160        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTABehaviorChase, m_MoveTo) == 0x68);
    static_assert(offsetof(CDOTABehaviorChase, m_hChaseEntity) == 0x148);
    static_assert(offsetof(CDOTABehaviorChase, m_bTargetMoves) == 0x14c);
    static_assert(offsetof(CDOTABehaviorChase, m_flFollowDistance) == 0x150);
    static_assert(offsetof(CDOTABehaviorChase, m_flForwardDistance) == 0x158);
    static_assert(offsetof(CDOTABehaviorChase, m_flRightDistance) == 0x15c);
    static_assert(offsetof(CDOTABehaviorChase, m_PositionFuzziness) == 0x160);
    
    static_assert(sizeof(CDOTABehaviorChase) == 0x178);
};
