#pragma once
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/TOGGLE_STATE.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x830
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CBaseToggle : public server::CBaseModelEntity
    {
    public:
        server::TOGGLE_STATE m_toggle_state; // 0x7b0        
        float m_flMoveDistance; // 0x7b4        
        float m_flWait; // 0x7b8        
        float m_flLip; // 0x7bc        
        bool m_bAlwaysFireBlockedOutputs; // 0x7c0        
        [[maybe_unused]] std::uint8_t pad_0x7c1[0x3]; // 0x7c1
        Vector m_vecPosition1; // 0x7c4        
        Vector m_vecPosition2; // 0x7d0        
        QAngle m_vecMoveAng; // 0x7dc        
        QAngle m_vecAngle1; // 0x7e8        
        QAngle m_vecAngle2; // 0x7f4        
        float m_flHeight; // 0x800        
        // m_hActivator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hActivator;
        char m_hActivator[0x4]; // 0x804        
        Vector m_vecFinalDest; // 0x808        
        QAngle m_vecFinalAngle; // 0x814        
        int32_t m_movementType; // 0x820        
        [[maybe_unused]] std::uint8_t pad_0x824[0x4]; // 0x824
        CUtlSymbolLarge m_sMaster; // 0x828        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseToggle because it is not a standard-layout class
    static_assert(sizeof(CBaseToggle) == 0x830);
};
