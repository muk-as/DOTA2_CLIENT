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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerLerpObject : public source2sdk::server::CBaseTrigger
        {
        public:
            CUtlSymbolLarge m_iszLerpTarget; // 0x_            
            // m_hLerpTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLerpTarget;
            char m_hLerpTarget[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszLerpTargetAttachment; // 0x_            
            source2sdk::modellib::AttachmentHandle_t m_hLerpTargetAttachment; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flLerpDuration; // 0x_            
            bool m_bAttachedEntityWasParented; // 0x_            
            bool m_bLerpRestoreMoveType; // 0x_            
            bool m_bSingleLerpObject; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecLerpingObjects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::lerpdata_t> m_vecLerpingObjects;
            char m_vecLerpingObjects[0x_]; // 0x_            
            CUtlSymbolLarge m_iszLerpEffect; // 0x_            
            CUtlSymbolLarge m_iszLerpSound; // 0x_            
            bool m_bAttachTouchingObject; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hEntityToWaitForDisconnect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEntityToWaitForDisconnect;
            char m_hEntityToWaitForDisconnect[0x_]; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnLerpStarted; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnLerpFinished; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnDetached; // 0x_            
            
            // Datamap fields:
            // void CTriggerLerpObjectLerpThink; // 0x_
            // void CTriggerLerpObjectUnsetWaitForEntity; // 0x_
            // void CTriggerLerpObjectAttachedEntityThink; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerLerpObject because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerLerpObject) == 0x_);
    };
};
