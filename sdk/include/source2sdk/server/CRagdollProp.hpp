#pragma once
#include "source2sdk/client/ragdoll_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
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
    class CBasePlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb98
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkVarNames "Vector m_ragPos"
    // static metadata: MNetworkVarNames "QAngle m_ragAngles"
    // static metadata: MNetworkVarNames "EHANDLE m_hRagdollSource"
    // static metadata: MNetworkVarNames "float32 m_flBlendWeight"
    #pragma pack(push, 1)
    class CRagdollProp : public server::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x9f8[0x8]; // 0x9f8
        client::ragdoll_t m_ragdoll; // 0xa00        
        bool m_bStartDisabled; // 0xa38        
        [[maybe_unused]] std::uint8_t pad_0xa39[0x7]; // 0xa39
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        // m_ragPos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<Vector> m_ragPos;
        char m_ragPos[0x18]; // 0xa40        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkBitCount "13"
        // m_ragAngles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<QAngle> m_ragAngles;
        char m_ragAngles[0x18]; // 0xa58        
        // metadata: MNetworkEnable
        // m_hRagdollSource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hRagdollSource;
        char m_hRagdollSource[0x4]; // 0xa70        
        uint32_t m_lastUpdateTickCount; // 0xa74        
        bool m_allAsleep; // 0xa78        
        bool m_bFirstCollisionAfterLaunch; // 0xa79        
        [[maybe_unused]] std::uint8_t pad_0xa7a[0x2]; // 0xa7a
        // m_hDamageEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hDamageEntity;
        char m_hDamageEntity[0x4]; // 0xa7c        
        // m_hKiller has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hKiller;
        char m_hKiller[0x4]; // 0xa80        
        // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerPawn> m_hPhysicsAttacker;
        char m_hPhysicsAttacker[0x4]; // 0xa84        
        entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xa88        
        entity2::GameTime_t m_flFadeOutStartTime; // 0xa8c        
        float m_flFadeTime; // 0xa90        
        Vector m_vecLastOrigin; // 0xa94        
        entity2::GameTime_t m_flAwakeTime; // 0xaa0        
        entity2::GameTime_t m_flLastOriginChangeTime; // 0xaa4        
        CUtlSymbolLarge m_strOriginClassName; // 0xaa8        
        CUtlSymbolLarge m_strSourceClassName; // 0xab0        
        bool m_bHasBeenPhysgunned; // 0xab8        
        bool m_bShouldTeleportPhysics; // 0xab9        
        [[maybe_unused]] std::uint8_t pad_0xaba[0x2]; // 0xaba
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "1,000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_flBlendWeight; // 0xabc        
        float m_flDefaultFadeScale; // 0xac0        
        [[maybe_unused]] std::uint8_t pad_0xac4[0x4]; // 0xac4
        // m_ragdollMins has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_ragdollMins;
        char m_ragdollMins[0x18]; // 0xac8        
        // m_ragdollMaxs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_ragdollMaxs;
        char m_ragdollMaxs[0x18]; // 0xae0        
        bool m_bShouldDeleteActivationRecord; // 0xaf8        
        [[maybe_unused]] std::uint8_t pad_0xaf9[0x5f]; // 0xaf9
        bool m_bValidatePoweredRagdollPose; // 0xb58        
        [[maybe_unused]] std::uint8_t pad_0xb59[0x3f];
        
        // Datamap fields:
        // void m_ragdoll.boneIndex; // 0xa18
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
        // void m_ragdoll.list; // 0xa00
        // bool m_ragdoll.allowStretch; // 0xa30
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CRagdollProp because it is not a standard-layout class
    static_assert(sizeof(CRagdollProp) == 0xb98);
};
