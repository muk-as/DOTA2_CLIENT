#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CTriggerOnce.hpp"
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
        // Size: 0xa28
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "bool m_bTestOcclusion"
        #pragma pack(push, 1)
        class CTriggerLook : public source2sdk::server::CTriggerOnce
        {
        public:
            // m_hLookTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLookTarget;
            char m_hLookTarget[0x4]; // 0x990            
            float m_flFieldOfView; // 0x994            
            float m_flLookTime; // 0x998            
            float m_flLookTimeTotal; // 0x99c            
            source2sdk::entity2::GameTime_t m_flLookTimeLast; // 0x9a0            
            float m_flTimeoutDuration; // 0x9a4            
            bool m_bTimeoutFired; // 0x9a8            
            bool m_bIsLooking; // 0x9a9            
            bool m_b2DFOV; // 0x9aa            
            bool m_bUseVelocity; // 0x9ab            
            // metadata: MNetworkEnable
            bool m_bTestOcclusion; // 0x9ac            
            uint8_t _pad09ad[0x3]; // 0x9ad
            source2sdk::entity2::CEntityIOOutput m_OnTimeout; // 0x9b0            
            source2sdk::entity2::CEntityIOOutput m_OnStartLook; // 0x9d8            
            source2sdk::entity2::CEntityIOOutput m_OnEndLook; // 0xa00            
            
            // Datamap fields:
            // void CTriggerLookTimeoutThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerLook because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerLook) == 0xa28);
    };
};
