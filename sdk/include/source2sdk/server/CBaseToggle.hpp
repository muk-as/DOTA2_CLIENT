#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/TOGGLE_STATE.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x848
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBaseToggle : public source2sdk::server::CBaseModelEntity
        {
        public:
            source2sdk::server::TOGGLE_STATE m_toggle_state; // 0x7c8            
            float m_flMoveDistance; // 0x7cc            
            float m_flWait; // 0x7d0            
            float m_flLip; // 0x7d4            
            bool m_bAlwaysFireBlockedOutputs; // 0x7d8            
            uint8_t _pad07d9[0x3]; // 0x7d9
            Vector m_vecPosition1; // 0x7dc            
            Vector m_vecPosition2; // 0x7e8            
            QAngle m_vecMoveAng; // 0x7f4            
            QAngle m_vecAngle1; // 0x800            
            QAngle m_vecAngle2; // 0x80c            
            float m_flHeight; // 0x818            
            // m_hActivator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hActivator;
            char m_hActivator[0x4]; // 0x81c            
            Vector m_vecFinalDest; // 0x820            
            QAngle m_vecFinalAngle; // 0x82c            
            std::int32_t m_movementType; // 0x838            
            uint8_t _pad083c[0x4]; // 0x83c
            CUtlSymbolLarge m_sMaster; // 0x840            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseToggle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseToggle) == 0x848);
    };
};
