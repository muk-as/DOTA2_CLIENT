#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimActionUpdater.hpp"
#include "source2sdk/animgraphlib/StateActionBehavior.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CStateActionUpdater
        {
        public:
            // m_pAction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSmartPtr<source2sdk::animgraphlib::CAnimActionUpdater> m_pAction;
            char m_pAction[0x_]; // 0x_            
            source2sdk::animgraphlib::StateActionBehavior m_eBehavior; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CStateActionUpdater, m_pAction) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CStateActionUpdater, m_eBehavior) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::CStateActionUpdater) == 0x_);
    };
};
