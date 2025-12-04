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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "bool m_bTestOcclusion"
        // static metadata: MNetworkVarNames "bool m_bTestAllVisibleOcclusion"
        #pragma pack(push, 1)
        class CTriggerLook : public source2sdk::server::CTriggerOnce
        {
        public:
            // m_hLookTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLookTarget;
            char m_hLookTarget[0x_]; // 0x_            
            float m_flFieldOfView; // 0x_            
            float m_flLookTime; // 0x_            
            float m_flLookTimeTotal; // 0x_            
            source2sdk::entity2::GameTime_t m_flLookTimeLast; // 0x_            
            float m_flTimeoutDuration; // 0x_            
            bool m_bTimeoutFired; // 0x_            
            bool m_bIsLooking; // 0x_            
            bool m_b2DFOV; // 0x_            
            bool m_bUseVelocity; // 0x_            
            // metadata: MNetworkEnable
            bool m_bTestOcclusion; // 0x_            
            // metadata: MNetworkEnable
            bool m_bTestAllVisibleOcclusion; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::CEntityIOOutput m_OnTimeout; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnStartLook; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnEndLook; // 0x_            
            
            // Datamap fields:
            // void CTriggerLookTimeoutThink; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerLook because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerLook) == 0x_);
    };
};
