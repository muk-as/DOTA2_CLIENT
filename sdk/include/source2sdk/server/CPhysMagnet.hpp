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
        // Size: 0x868
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysMagnet : public source2sdk::server::CBaseAnimatingActivity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnMagnetAttach; // 0x7d8            
            source2sdk::entity2::CEntityIOOutput m_OnMagnetDetach; // 0x800            
            float m_massScale; // 0x828            
            float m_forceLimit; // 0x82c            
            float m_torqueLimit; // 0x830            
            uint8_t _pad0834[0x4]; // 0x834
            // m_MagnettedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::magnetted_objects_t> m_MagnettedEntities;
            char m_MagnettedEntities[0x18]; // 0x838            
            bool m_bActive; // 0x850            
            bool m_bHasHitSomething; // 0x851            
            uint8_t _pad0852[0x2]; // 0x852
            float m_flTotalMass; // 0x854            
            float m_flRadius; // 0x858            
            source2sdk::entity2::GameTime_t m_flNextSuckTime; // 0x85c            
            std::int32_t m_iMaxObjectsAttached; // 0x860            
            uint8_t _pad0864[0x4];
            
            // Datamap fields:
            // void InputToggle; // 0x0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysMagnet because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysMagnet) == 0x868);
    };
};
