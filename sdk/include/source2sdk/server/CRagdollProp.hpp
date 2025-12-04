#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ragdoll_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CBasePlayerPawn;
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
        // 
        // static metadata: MNetworkVarNames "bool m_ragEnabled"
        // static metadata: MNetworkVarNames "Vector m_ragPos"
        // static metadata: MNetworkVarNames "QAngle m_ragAngles"
        // static metadata: MNetworkVarNames "EHANDLE m_hRagdollSource"
        // static metadata: MNetworkVarNames "float32 m_flBlendWeight"
        #pragma pack(push, 1)
        class CRagdollProp : public source2sdk::server::CBaseAnimGraph
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ragdoll_t m_ragdoll; // 0x_            
            bool m_bStartDisabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_ragEnabled has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<bool> m_ragEnabled;
            char m_ragEnabled[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            // m_ragPos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<Vector> m_ragPos;
            char m_ragPos[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle"
            // metadata: MNetworkBitCount "13"
            // m_ragAngles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<QAngle> m_ragAngles;
            char m_ragAngles[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hRagdollSource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRagdollSource;
            char m_hRagdollSource[0x_]; // 0x_            
            std::uint32_t m_lastUpdateTickCount; // 0x_            
            bool m_allAsleep; // 0x_            
            bool m_bFirstCollisionAfterLaunch; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hDamageEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hDamageEntity;
            char m_hDamageEntity[0x_]; // 0x_            
            // m_hKiller has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hKiller;
            char m_hKiller[0x_]; // 0x_            
            // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerPawn> m_hPhysicsAttacker;
            char m_hPhysicsAttacker[0x_]; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0x_            
            source2sdk::entity2::GameTime_t m_flFadeOutStartTime; // 0x_            
            float m_flFadeTime; // 0x_            
            Vector m_vecLastOrigin; // 0x_            
            source2sdk::entity2::GameTime_t m_flAwakeTime; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastOriginChangeTime; // 0x_            
            CUtlSymbolLarge m_strOriginClassName; // 0x_            
            CUtlSymbolLarge m_strSourceClassName; // 0x_            
            bool m_bHasBeenPhysgunned; // 0x_            
            bool m_bShouldTeleportPhysics; // 0x_            
            bool m_bAllowStretch; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1,000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_flBlendWeight; // 0x_            
            float m_flDefaultFadeScale; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_ragdollMins has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_ragdollMins;
            char m_ragdollMins[0x_]; // 0x_            
            // m_ragdollMaxs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_ragdollMaxs;
            char m_ragdollMaxs[0x_]; // 0x_            
            bool m_bShouldDeleteActivationRecord; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bValidatePoweredRagdollPose; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void m_ragdoll.boneIndex; // 0x_
            // void InputEnableMotion; // 0x_
            // void InputDisableMotion; // 0x_
            // void InputTurnOn; // 0x_
            // void InputTurnOff; // 0x_
            // float InputFadeAndRemove; // 0x_
            // void CRagdollPropSetDebrisThink; // 0x_
            // void CRagdollPropClearFlagsThink; // 0x_
            // void CRagdollPropFadeOutThink; // 0x_
            // void CRagdollPropSettleThink; // 0x_
            // void CRagdollPropAttachedItemsThink; // 0x_
            // void CRagdollPropRagdollTouch; // 0x_
            // void m_ragdoll.list; // 0x_
            // void m_ragdoll.hierarchyJoints; // 0x_
            // bool m_ragdoll.allowStretch; // 0x_
            // float massScale; // 0x_
            // float buoyancyscale; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRagdollProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CRagdollProp) == 0x_);
    };
};
