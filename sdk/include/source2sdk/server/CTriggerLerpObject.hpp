#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/server/lerpdata_t.hpp"
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
        // Size: 0xa10
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerLerpObject : public source2sdk::server::CBaseTrigger
        {
        public:
            CUtlSymbolLarge m_iszLerpTarget; // 0x968            
            // m_hLerpTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLerpTarget;
            char m_hLerpTarget[0x4]; // 0x970            
            uint8_t _pad0974[0x4]; // 0x974
            CUtlSymbolLarge m_iszLerpTargetAttachment; // 0x978            
            source2sdk::modellib::AttachmentHandle_t m_hLerpTargetAttachment; // 0x980            
            uint8_t _pad0981[0x3]; // 0x981
            float m_flLerpDuration; // 0x984            
            bool m_bLerpRestoreMoveType; // 0x988            
            bool m_bSingleLerpObject; // 0x989            
            uint8_t _pad098a[0x6]; // 0x98a
            // m_vecLerpingObjects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::lerpdata_t> m_vecLerpingObjects;
            char m_vecLerpingObjects[0x18]; // 0x990            
            CUtlSymbolLarge m_iszLerpEffect; // 0x9a8            
            CUtlSymbolLarge m_iszLerpSound; // 0x9b0            
            bool m_bAttachTouchingObject; // 0x9b8            
            uint8_t _pad09b9[0x3]; // 0x9b9
            // m_hEntityToWaitForDisconnect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEntityToWaitForDisconnect;
            char m_hEntityToWaitForDisconnect[0x4]; // 0x9bc            
            source2sdk::entity2::CEntityIOOutput m_OnLerpStarted; // 0x9c0            
            source2sdk::entity2::CEntityIOOutput m_OnLerpFinished; // 0x9e8            
            
            // Datamap fields:
            // void CTriggerLerpObjectLerpThink; // 0x0
            // void CTriggerLerpObjectUnsetWaitForEntity; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerLerpObject because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerLerpObject) == 0xa10);
    };
};
