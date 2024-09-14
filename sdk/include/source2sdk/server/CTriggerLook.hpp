#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CTriggerOnce.hpp"
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
    // Size: 0xa18
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bTestOcclusion"
    #pragma pack(push, 1)
    class CTriggerLook : public server::CTriggerOnce
    {
    public:
        // m_hLookTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLookTarget;
        char m_hLookTarget[0x4]; // 0x980        
        float m_flFieldOfView; // 0x984        
        float m_flLookTime; // 0x988        
        float m_flLookTimeTotal; // 0x98c        
        entity2::GameTime_t m_flLookTimeLast; // 0x990        
        float m_flTimeoutDuration; // 0x994        
        bool m_bTimeoutFired; // 0x998        
        bool m_bIsLooking; // 0x999        
        bool m_b2DFOV; // 0x99a        
        bool m_bUseVelocity; // 0x99b        
        // metadata: MNetworkEnable
        bool m_bTestOcclusion; // 0x99c        
        [[maybe_unused]] std::uint8_t pad_0x99d[0x3]; // 0x99d
        entity2::CEntityIOOutput m_OnTimeout; // 0x9a0        
        entity2::CEntityIOOutput m_OnStartLook; // 0x9c8        
        entity2::CEntityIOOutput m_OnEndLook; // 0x9f0        
        
        // Datamap fields:
        // void CTriggerLookTimeoutThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerLook because it is not a standard-layout class
    static_assert(sizeof(CTriggerLook) == 0xa18);
};
