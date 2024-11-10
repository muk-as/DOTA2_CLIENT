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
    // Size: 0xa40
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkVarNames "bool m_bTestOcclusion"
    #pragma pack(push, 1)
    class CTriggerLook : public server::CTriggerOnce
    {
    public:
        // m_hLookTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLookTarget;
        char m_hLookTarget[0x4]; // 0x9a8        
        float m_flFieldOfView; // 0x9ac        
        float m_flLookTime; // 0x9b0        
        float m_flLookTimeTotal; // 0x9b4        
        entity2::GameTime_t m_flLookTimeLast; // 0x9b8        
        float m_flTimeoutDuration; // 0x9bc        
        bool m_bTimeoutFired; // 0x9c0        
        bool m_bIsLooking; // 0x9c1        
        bool m_b2DFOV; // 0x9c2        
        bool m_bUseVelocity; // 0x9c3        
        // metadata: MNetworkEnable
        bool m_bTestOcclusion; // 0x9c4        
        [[maybe_unused]] std::uint8_t pad_0x9c5[0x3]; // 0x9c5
        entity2::CEntityIOOutput m_OnTimeout; // 0x9c8        
        entity2::CEntityIOOutput m_OnStartLook; // 0x9f0        
        entity2::CEntityIOOutput m_OnEndLook; // 0xa18        
        
        // Datamap fields:
        // void CTriggerLookTimeoutThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerLook because it is not a standard-layout class
    static_assert(sizeof(CTriggerLook) == 0xa40);
};
