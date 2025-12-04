#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ForcedCrouchState_t.hpp"
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CGameScriptedMoveDef_t
        {
        public:
            Vector m_vDestOffset; // 0x_            
            // m_hDestEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hDestEntity;
            char m_hDestEntity[0x_]; // 0x_            
            QAngle m_angDest; // 0x_            
            float m_flDuration; // 0x_            
            float m_flAngRate; // 0x_            
            float m_flMoveSpeed; // 0x_            
            bool m_bAimDisabled; // 0x_            
            bool m_bIgnoreRotation; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ForcedCrouchState_t m_nForcedCrouchState; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveDef_t, m_vDestOffset) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveDef_t, m_hDestEntity) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveDef_t, m_angDest) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveDef_t, m_flDuration) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveDef_t, m_flAngRate) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveDef_t, m_flMoveSpeed) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveDef_t, m_bAimDisabled) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveDef_t, m_bIgnoreRotation) == 0x_);
        static_assert(offsetof(source2sdk::server::CGameScriptedMoveDef_t, m_nForcedCrouchState) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CGameScriptedMoveDef_t) == 0x_);
    };
};
