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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xc80
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
            uint8_t _pad0ab0[0x8]; // 0xab0
            source2sdk::client::ragdoll_t m_ragdoll; // 0xab8            
            bool m_bStartDisabled; // 0xb08            
            uint8_t _pad0b09[0x7]; // 0xb09
            // metadata: MNetworkEnable
            // m_ragEnabled has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<bool> m_ragEnabled;
            char m_ragEnabled[0x18]; // 0xb10            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            // m_ragPos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<Vector> m_ragPos;
            char m_ragPos[0x18]; // 0xb28            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle"
            // metadata: MNetworkBitCount "13"
            // m_ragAngles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<QAngle> m_ragAngles;
            char m_ragAngles[0x18]; // 0xb40            
            // metadata: MNetworkEnable
            // m_hRagdollSource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRagdollSource;
            char m_hRagdollSource[0x4]; // 0xb58            
            std::uint32_t m_lastUpdateTickCount; // 0xb5c            
            bool m_allAsleep; // 0xb60            
            bool m_bFirstCollisionAfterLaunch; // 0xb61            
            uint8_t _pad0b62[0x2]; // 0xb62
            // m_hDamageEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hDamageEntity;
            char m_hDamageEntity[0x4]; // 0xb64            
            // m_hKiller has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hKiller;
            char m_hKiller[0x4]; // 0xb68            
            // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerPawn> m_hPhysicsAttacker;
            char m_hPhysicsAttacker[0x4]; // 0xb6c            
            source2sdk::entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xb70            
            source2sdk::entity2::GameTime_t m_flFadeOutStartTime; // 0xb74            
            float m_flFadeTime; // 0xb78            
            Vector m_vecLastOrigin; // 0xb7c            
            source2sdk::entity2::GameTime_t m_flAwakeTime; // 0xb88            
            source2sdk::entity2::GameTime_t m_flLastOriginChangeTime; // 0xb8c            
            CUtlSymbolLarge m_strOriginClassName; // 0xb90            
            CUtlSymbolLarge m_strSourceClassName; // 0xb98            
            bool m_bHasBeenPhysgunned; // 0xba0            
            bool m_bShouldTeleportPhysics; // 0xba1            
            bool m_bAllowStretch; // 0xba2            
            uint8_t _pad0ba3[0x1]; // 0xba3
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1,000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_flBlendWeight; // 0xba4            
            float m_flDefaultFadeScale; // 0xba8            
            uint8_t _pad0bac[0x4]; // 0xbac
            // m_ragdollMins has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_ragdollMins;
            char m_ragdollMins[0x18]; // 0xbb0            
            // m_ragdollMaxs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_ragdollMaxs;
            char m_ragdollMaxs[0x18]; // 0xbc8            
            bool m_bShouldDeleteActivationRecord; // 0xbe0            
            uint8_t _pad0be1[0x5f]; // 0xbe1
            bool m_bValidatePoweredRagdollPose; // 0xc40            
            uint8_t _pad0c41[0x3f];
            
            // Datamap fields:
            // void m_ragdoll.boneIndex; // 0xae8
            // void InputEnableMotion; // 0x0
            // void InputDisableMotion; // 0x0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // float InputFadeAndRemove; // 0x0
            // void CRagdollPropSetDebrisThink; // 0x0
            // void CRagdollPropClearFlagsThink; // 0x0
            // void CRagdollPropFadeOutThink; // 0x0
            // void CRagdollPropSettleThink; // 0x0
            // void CRagdollPropAttachedItemsThink; // 0x0
            // void CRagdollPropRagdollTouch; // 0x0
            // void m_ragdoll.list; // 0xab8
            // void m_ragdoll.hierarchyJoints; // 0xad0
            // bool m_ragdoll.allowStretch; // 0xb00
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRagdollProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CRagdollProp) == 0xc80);
    };
};
