#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimatingActivity.hpp"
#include "source2sdk/server/magnetted_objects_t.hpp"

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
        class CPhysMagnet : public source2sdk::server::CBaseAnimatingActivity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnMagnetAttach; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnMagnetDetach; // 0x_            
            float m_massScale; // 0x_            
            float m_forceLimit; // 0x_            
            float m_torqueLimit; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_MagnettedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::magnetted_objects_t> m_MagnettedEntities;
            char m_MagnettedEntities[0x_]; // 0x_            
            bool m_bActive; // 0x_            
            bool m_bHasHitSomething; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flTotalMass; // 0x_            
            float m_flRadius; // 0x_            
            source2sdk::entity2::GameTime_t m_flNextSuckTime; // 0x_            
            std::int32_t m_iMaxObjectsAttached; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void InputToggle; // 0x_
            // void InputTurnOn; // 0x_
            // void InputTurnOff; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysMagnet because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysMagnet) == 0x_);
    };
};
