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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x848
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysMagnet : public source2sdk::server::CBaseAnimatingActivity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnMagnetAttach; // 0x7b8            
            source2sdk::entity2::CEntityIOOutput m_OnMagnetDetach; // 0x7e0            
            float m_massScale; // 0x808            
            float m_forceLimit; // 0x80c            
            float m_torqueLimit; // 0x810            
            uint8_t _pad0814[0x4]; // 0x814
            // m_MagnettedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::magnetted_objects_t> m_MagnettedEntities;
            char m_MagnettedEntities[0x18]; // 0x818            
            bool m_bActive; // 0x830            
            bool m_bHasHitSomething; // 0x831            
            uint8_t _pad0832[0x2]; // 0x832
            float m_flTotalMass; // 0x834            
            float m_flRadius; // 0x838            
            source2sdk::entity2::GameTime_t m_flNextSuckTime; // 0x83c            
            std::int32_t m_iMaxObjectsAttached; // 0x840            
            uint8_t _pad0844[0x4];
            
            // Datamap fields:
            // void InputToggle; // 0x0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysMagnet because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysMagnet) == 0x848);
    };
};
