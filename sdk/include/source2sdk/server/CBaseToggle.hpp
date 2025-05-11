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
        // Size: 0x828
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBaseToggle : public source2sdk::server::CBaseModelEntity
        {
        public:
            source2sdk::server::TOGGLE_STATE m_toggle_state; // 0x7a8            
            float m_flMoveDistance; // 0x7ac            
            float m_flWait; // 0x7b0            
            float m_flLip; // 0x7b4            
            bool m_bAlwaysFireBlockedOutputs; // 0x7b8            
            uint8_t _pad07b9[0x3]; // 0x7b9
            Vector m_vecPosition1; // 0x7bc            
            Vector m_vecPosition2; // 0x7c8            
            QAngle m_vecMoveAng; // 0x7d4            
            QAngle m_vecAngle1; // 0x7e0            
            QAngle m_vecAngle2; // 0x7ec            
            float m_flHeight; // 0x7f8            
            // m_hActivator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hActivator;
            char m_hActivator[0x4]; // 0x7fc            
            Vector m_vecFinalDest; // 0x800            
            QAngle m_vecFinalAngle; // 0x80c            
            std::int32_t m_movementType; // 0x818            
            uint8_t _pad081c[0x4]; // 0x81c
            CUtlSymbolLarge m_sMaster; // 0x820            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseToggle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseToggle) == 0x828);
    };
};
