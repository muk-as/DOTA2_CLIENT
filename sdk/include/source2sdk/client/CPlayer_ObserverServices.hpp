#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerPawnComponent.hpp"
#include "source2sdk/client/ObserverMode_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "uint8 m_iObserverMode"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hObserverTarget"
        #pragma pack(push, 1)
        class CPlayer_ObserverServices : public source2sdk::client::CPlayerPawnComponent
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnObserverModeChanged"
            std::uint8_t m_iObserverMode; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnObserverTargetChanged"
            // m_hObserverTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hObserverTarget;
            char m_hObserverTarget[0x_]; // 0x_            
            source2sdk::client::ObserverMode_t m_iObserverLastMode; // 0x_            
            bool m_bForcedObserverMode; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flObserverChaseDistance; // 0x_            
            source2sdk::entity2::GameTime_t m_flObserverChaseDistanceCalcTime; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlayer_ObserverServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPlayer_ObserverServices) == 0x_);
    };
};
